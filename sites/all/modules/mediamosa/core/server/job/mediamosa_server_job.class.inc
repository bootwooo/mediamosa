<?php
// $Id$

/**
 * MediaMosa is Open Source Software to build a Full Featured, Webservice
 * Oriented Media Management and Distribution platform (http://mediamosa.org)
 *
 * Copyright (C) 2011 SURFnet BV (http://www.surfnet.nl) and Kennisnet
 * (http://www.kennisnet.nl)
 *
 * MediaMosa is based on the open source Drupal platform and
 * was originally developed by Madcap BV (http://www.madcap.nl)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, you can find it at:
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 */

/**
 * @file
 *
 */
class mediamosa_server_job {

  /**
 * Verwijder de job-server-relatie van de job lijst.
 */
  /**
   * Remove server<->job link.
   *
   * _vpx_jobhandler_clear_serverjob
   *
   * @param integer $job_id
   *  The Job ID.
   */
  static public function delete_by_jobid($job_id) {
    // Remove link.
    mediamosa_db::db_delete(mediamosa_server_job_db::TABLE_NAME)
      ->condition(mediamosa_server_job_db::JOB_ID, $job_id)
      ->execute();
  }
}